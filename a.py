import numpy as np
import matplotlib.pyplot as plt
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score
from sklearn.tree import plot_tree

# Load the Iris dataset
iris = load_iris()
X, y = iris.data, iris.target

# Split the data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Number of base classifiers (trees) in the Random Forest
n_estimators = 10

# Create a list to store individual models (Random Forest classifiers)
models = []

# Build the ensemble of Random Forest classifiers
for _ in range(n_estimators):
    # Create a base Random Forest classifier
    base_model = RandomForestClassifier(n_estimators=10, max_depth=None, random_state=None)

    # Randomly sample the dataset with replacement (bootstrap sampling)
    bootstrap_indices = np.random.choice(range(len(X_train)), size=len(X_train), replace=True)
    X_bootstrap = X_train[bootstrap_indices]
    y_bootstrap = y_train[bootstrap_indices]

    # Train the base model on the bootstrap sample
    base_model.fit(X_bootstrap, y_bootstrap)

    # Add the trained base model to the list
    models.append(base_model)

# Make predictions with each base model and combine them using majority voting
def ensemble_predict(models, X):
    predictions = np.zeros((X.shape[0], len(models)))

    for i, model in enumerate(models):
        predictions[:, i] = model.predict(X)

    # Use majority voting to make the final prediction
    final_predictions = np.round(np.mean(predictions, axis=1))

    return final_predictions.astype(int)

# Make predictions on the test set using the ensemble of models
ensemble_predictions = ensemble_predict(models, X_test)

# Evaluate the accuracy of the ensemble on the test set
accuracy = accuracy_score(y_test, ensemble_predictions)
print(f'Ensemble Accuracy: {accuracy}')

# Plot a few random trees from the ensemble
fig, axes = plt.subplots(2, 5, figsize=(12, 6))
fig.suptitle('Random Forest Trees from the Ensemble')

for i, ax in enumerate(axes.flatten()):
    tree_idx = np.random.randint(0, n_estimators)
    tree = models[tree_idx].estimators_[0]  # Extract the first tree from the selected model

    # Plot the tree
    plot_tree(tree, feature_names=iris.feature_names, class_names=iris.target_names, filled=True, ax=ax)
    ax.set_title(f'Tree {i + 1}')

plt.show()

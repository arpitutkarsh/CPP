import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler, LabelEncoder
from sklearn.decomposition import PCA
from sklearn.cluster import KMeans
from sklearn.ensemble import RandomForestClassifier
from sklearn.linear_model import LinearRegression
from sklearn.metrics import accuracy_score, mean_squared_error
#Loading IRIS Dataset
from sklearn.datasets import load_iris
iris = load_iris()
data = pd.DataFrame(data=np.c_[iris['data'], iris['target']], columns=iris['feature_names'] + ['target'])
#1. Pre-Processing Dataset
#Visualizing Dataset
sns.pairplot(data, hue ='target', palette='viridis')
plt.title('IRIS Dataset Pairplot')
plt.show()
#Exploring the Dataset
print(data.head())
print(data.describe())
print(data['target'].value_counts())
#Splitting the Dataset
X = data.drop('target', axis=1)
y = data['target']
# Split the dataset into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
# 2. Dimension Reduction using PCA
# Standardize the features
scaler = StandardScaler()
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)

# Apply PCA
pca = PCA(n_components=2)
X_train_pca = pca.fit_transform(X_train_scaled)
X_test_pca = pca.transform(X_test_scaled)
# Visualize the data after dimension reduction
plt.scatter(X_train_pca[:, 0], X_train_pca[:, 1], c=y_train, cmap='viridis')
plt.title('Peincipal Component Analysis of Iris Dataset')
plt.xlabel('Principal Component 1')
plt.ylabel('Principal Component 2')
plt.show()
# 3. Clustering using K-Means
# Apply K-Means clustering
kmeans = KMeans(n_clusters=3, random_state=42)
clusters = kmeans.fit_predict(X_train_scaled)
# Visualize the clusters
plt.scatter(X_train_pca[:, 0], X_train_pca[:, 1], c=clusters, cmap='viridis')
plt.title('K-Means Clustering of Iris Dataset')
plt.xlabel('Principal Component 1')
plt.ylabel('Principal Component 2')
plt.show()
# 4. Classification using Random Forest
# Train a Random Forest classifier
clf = RandomForestClassifier(random_state=42)
clf.fit(X_train_scaled, y_train)

# Evaluate the classifier
y_pred = clf.predict(X_test_scaled)
accuracy = accuracy_score(y_test, y_pred)
print(f'Accuracy: {accuracy}')
# 5. Prediction using Linear Regression
# Train a Linear Regression model
reg = LinearRegression()
reg.fit(X_train_scaled, y_train)
# Predict the target variable
y_pred_reg = reg.predict(X_test_scaled)

# Evaluate the regression model
mse = mean_squared_error(y_test, y_pred_reg)
print(f'Mean Squared Error: {mse}')
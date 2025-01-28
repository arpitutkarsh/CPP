# 1. Import the necessary libraries
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.impute import SimpleImputer
from sklearn.preprocessing import LabelEncoder, OneHotEncoder, StandardScaler, MinMaxScaler
from scipy import stats

# 2. Load the dataset
url = "https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data"
columns = ["sepal_length", "sepal_width", "petal_length", "petal_width", "species"]
iris_df = pd.read_csv(url, header=None, names=columns)

# 3. Check the data info
print(iris_df.info())

# 4. Splitting the dataset into Training, Validation, and Test sets
train_data, test_data = train_test_split(iris_df, test_size=0.2, random_state=42)
train_data, val_data = train_test_split(train_data, test_size=0.25, random_state=42)

# 5. Separate independent features and Target Variables
X_train, y_train = train_data.drop("species", axis=1), train_data["species"]
X_val, y_val = val_data.drop("species", axis=1), val_data["species"]
X_test, y_test = test_data.drop("species", axis=1), test_data["species"]

# 6. Count the Missing values
print("Missing values:\n", iris_df.isnull().sum())

# 7. Dealing with the Missing values using SimpleImputer method
imputer = SimpleImputer(strategy="mean")
X_train_imputed = imputer.fit_transform(X_train)
X_val_imputed = imputer.transform(X_val)
X_test_imputed = imputer.transform(X_test)

# 8. Show the Categorical Features
categorical_features = iris_df.select_dtypes(include=["object"]).columns
print("Categorical Features:", categorical_features)

# 9. Convert the Categorical Features into integers using Label Encoder, One Hot Encoder
label_encoder = LabelEncoder()
iris_df["species_encoded"] = label_encoder.fit_transform(iris_df["species"])

one_hot_encoder = OneHotEncoder()
iris_one_hot_encoded = one_hot_encoder.fit_transform(iris_df[["species_encoded"]]).toarray()

# 10. Check the outliers
z_scores = stats.zscore(iris_df.drop("species", axis=1))
outliers = (z_scores > 3) | (z_scores < -3)
outliers_df = iris_df[outliers.any(axis=1)]

# 11. Drop the outliers
iris_no_outliers = iris_df.drop(outliers_df.index)

# 12. Normalization or Standardization of the dataset using Min-max, z-score, and decimal scaling method
min_max_scaler = MinMaxScaler()
iris_min_max_scaled = min_max_scaler.fit_transform(iris_df.drop(["species", "species_encoded"], axis=1))

z_score_scaled = stats.zscore(iris_df.drop(["species", "species_encoded"], axis=1))

# 13. Statistical Analysis (mean, median, variance, standard deviation, etc)
statistical_analysis = iris_df.describe()

# 14. Correlation Analysis
correlation_matrix = iris_df.corr()

# Displaying results
print("Imputed Training Data:\n", X_train_imputed)
print("Imputed Validation Data:\n", X_val_imputed)
print("Imputed Test Data:\n", X_test_imputed)
print("One-Hot Encoded Data:\n", iris_one_hot_encoded)
print("Outliers:\n", outliers_df)
print("Dataset without outliers:\n", iris_no_outliers)
print("Min-Max Scaled Data:\n", iris_min_max_scaled)
print("Z-Score Scaled Data:\n", z_score_scaled)
print("Statistical Analysis:\n", statistical_analysis)
print("Correlation Matrix:\n", correlation_matrix)

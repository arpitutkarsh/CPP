import pandas as pd
from mlxtend.preprocessing import TransactionEncoder
from mlxtend.frequent_patterns import apriori, association_rules
import matplotlib.pyplot as plt

# Sample transactional dataset
dataset = [
    ['Milk', 'Bread', 'Butter'],
    ['Bread', 'Eggs'],
    ['Milk', 'Butter'],
    ['Milk', 'Bread', 'Eggs'],
    ['Bread'],
    ['Milk', 'Bread', 'Butter', 'Eggs'],
    ['Butter', 'Eggs']
]

# Convert the dataset to a one-hot encoded format
te = TransactionEncoder()
te_ary = te.fit(dataset).transform(dataset)
df = pd.DataFrame(te_ary, columns=te.columns_)

# Apriori algorithm
frequent_itemsets_apriori = apriori(df, min_support=0.3, use_colnames=True)

# Association rules
rules_apriori = association_rules(frequent_itemsets_apriori, metric="confidence", min_threshold=0.7)

# Display the resulting rules
print("Association Rules:")
print(rules_apriori)

# Data Visualization
# Support vs Confidence for Apriori
plt.scatter(rules_apriori['support'], rules_apriori['confidence'], alpha=0.5)
plt.xlabel('Support')
plt.ylabel('Confidence')
plt.title('Apriori - Support vs Confidence')
plt.show()

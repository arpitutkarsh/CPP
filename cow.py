import numpy as np
import random
import matplotlib.pyplot as plt
import seaborn as sns
# Define the cities and their coordinates
cities = {
    'A': (5,0),
    'B': (11,32),
    'C': (24,12),
    'D': (11,7),
    'E': (9,27)

}
# Define the genetic algorithm parameters
population_size = 100
generations = 1000
crossover_rate = 0.8
mutation_rate = 0.02
# Function to calculate the distance between two cities
def distance(city1, city2):
    x1, y1 = cities[city1]
    x2, y2 = cities[city2]
    return np.sqrt((x1 - x2)**2 + (y1 - y2)**2)
# Function to calculate the total distance of a route
def total_distance(route):
    total = 0
    for i in range(len(route) - 1):
        total += distance(route[i], route[i + 1])
    total += distance(route[-1], route[0])  # Return to the starting city
    return total
# Function to create an initial population of routes
def create_population(size):
    population = []
    cities_list = list(cities.keys())
    for _ in range(size):
        route = random.sample(cities_list, len(cities_list))
        population.append(route)
    return population
# Function to perform crossover between two parent routes
def crossover(parent1, parent2):
    crossover_point = random.randint(0, len(parent1) - 1)
    child1 = parent1[:crossover_point] + [city for city in parent2 if city not in parent1[:crossover_point]]
    child2 = parent2[:crossover_point] + [city for city in parent1 if city not in parent2[:crossover_point]]
    return child1, child2
# Function to perform mutation on a route
def mutate(route):
    mutation_point1, mutation_point2 = random.sample(range(len(route)), 2)
    route[mutation_point1], route[mutation_point2] = route[mutation_point2], route[mutation_point1]
    return route
# Function to select parents based on tournament selection
def select_parents(population):
    tournament_size = 5
    tournament = random.sample(population, tournament_size)
    tournament.sort(key=lambda route: total_distance(route))
    return tournament[0], tournament[1]
# Main Genetic Algorithm
def genetic_algorithm():
    population = create_population(population_size)
    best_route = None
    best_distance = float('inf')
    for generation in range(generations):
        new_population = []
        for _ in range(population_size // 2):
            parent1, parent2 = select_parents(population)
            # Perform crossover
            if random.random() < crossover_rate:
                child1, child2 = crossover(parent1, parent2)
            else:
                child1, child2 = parent1, parent2
            # Perform mutation
            if random.random() < mutation_rate:
                child1 = mutate(child1)
            if random.random() < mutation_rate:
                child2 = mutate(child2)
            new_population.extend([child1, child2])
        # Select the best routes for the next generation
        population = sorted(new_population, key=lambda route: total_distance(route))[:population_size]
        # Update the best route
        current_best_distance = total_distance(population[0])
        if current_best_distance < best_distance:
            best_distance = current_best_distance
            best_route = population[0]
    return best_route, best_distance
# Run the genetic algorithm
best_route, best_distance = genetic_algorithm()
# Print the result
print(f"Best Route: {best_route}")
print(f"Best Distance: {best_distance}")
#plot cities
city_names = list(cities.keys())
x_cities = [cities[city][0] for city in city_names]
y_cities = [cities[city][1] for city in city_names]
plt.scatter(x_cities, y_cities, marker='o', color='blue', label='Cities')
# Plot the best route
x = [cities[city][0] for city in best_route + [best_route[0]]]
y = [cities[city][1] for city in best_route + [best_route[0]]]
plt.plot(x, y, c='hotpink',marker='o', linestyle='-')
plt.title('Best Route for TSP')
plt.xlabel('X-coordinate')
plt.ylabel('Y-coordinate')
plt.show()
distance_matrix = np.zeros((len(cities), len(cities)))
for i, city1 in enumerate(cities):
    for j, city2 in enumerate(cities):
        distance_matrix[i, j] = distance(city1, city2)
# Plot the distance matrix as a heatmap
plt.figure(figsize=(8, 6))
sns.heatmap(distance_matrix, annot=True, fmt=".2f", cmap="YlGnBu", xticklabels=cities.keys(), yticklabels=cities.keys())
plt.title('Distance Matrix for TSP Cities')
plt.show()

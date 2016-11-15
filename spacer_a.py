### Program to cluster the spacers using K-means algorithm ###

###Libraries
import numpy as np 
import pandas as pd 
import matplotlib.pyplot as plt 
from matplotlib import style
style.use("ggplot")

#Library for ML algorithms
from sklearn.cluster import KMeans, MeanShift

#Reading the data file and converting it into a dataframe
df = pd.read_csv('manesh_sop.csv') 

#X coordinates of the data frame
X = np.array(df['Spacer'])

#Y coordinates of the data frame
y = np.array(df['TGTCTA'])

#Forming coordinates for clustering
lister = np.array(zip(X,y))

#Applying K-means Algorithm for clustering
kmeans = KMeans(n_clusters=4)

#Usage of MeanShift algorithm -- Automatically detects number of clusters
#kmeans = MeanShift()

#Passing the data into the algorithm
kmeans.fit(lister)

#Centroids - Random points on the basis of which clustering is done
centroids = kmeans.cluster_centers_

#Labels assigned on for different clusters
labels = kmeans.labels_

#Different clusters will be visualised with different clusters
colors = 10*['r.','g.','b.','c.','k.','y.','m.']

for i in range(len(lister)):
	plt.plot(lister[i][0],lister[i][1],colors[labels[i]], markersize=10)
	print labels[i]

#Display of positions of centroids
plt.scatter(centroids[:, 0],centroids[:, 1],marker="x",s=150)

plt.show()


#print lister
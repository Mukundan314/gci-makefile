all: plot

gen_points: gen_points.cpp
	g++ gen_points.cpp -o gen_points

points: gen_points
	./gen_points

plot: plot.py points
	python plot.py

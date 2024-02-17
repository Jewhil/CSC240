/*
City = tempe ;
City = atlanta ;
City = chicago ;
City = denver ;
City = seattle ;
City = boise ;
City = saltlakecity ;
City = sanfrancisco ;
City = neworleans.
*/

%city_altitude(X,_,Z).

city_altitude(tempe, az, 1318).
city_altitude(atlanta, ga, 894).
city_altitude(chicago, il, 583).
city_altitude(denver, co, 5280).
city_altitude(seattle, wa, 260).
city_altitude(boise, id, 2704).
city_altitude(saltlakecity, ut, 4226).

city_altitude(sanfrancisco, ca, 52).
city_altitude(neworleans, la, 7).



%rules
high_city(City):-
city_altitude(City,_,Altitude), 
Altitude >1000.

city_altitude_in_meters(City, State, Feet, Meters):-
city_altitude(City, State, Feet),
Meters is 0.3048 * Feet.

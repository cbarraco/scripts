getweather
==========

Gets the weather

Dependencies
------------
getweather is written for python 2 and uses the json, argsparse, and requests modules.
if you get an error saying you don't have one of those modules, install it with easy_install

Installation
------------
Make sure getweather is executable and copy it to /usr/bin to access it anywhere, ie:
	
	chmod a+x ./getweather && sudo cp ./getweather /usr/bin/

Usage
-----
usage: getweather [-h] [-l [LOCATION]] [-s [SEPARATOR]] [-i] [-d] [-w] [-t]

optional arguments:
  -h, --help            show this help message and exit
  -l [LOCATION], --location [LOCATION]
                        Location of weather data (default is Waterloo Ontario
                        Canada)
  -s [SEPARATOR], --separator [SEPARATOR]
                        Separator between information (default is ' ')
  -i, --imperial        Set measurement system for all units to imperial
                        (default is metric)
  -d, --detailed        Shows a more detailed description
  -w, --windspeed       Show wind data in output
  -t, --temperature     Show temperature data in output

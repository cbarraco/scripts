getweather
==========

Gets the current weather conditions from Google

Dependencies
------------
getweather is written in python and uses the mechanize, beautifulsoup4, argsparse, and lxml modules.
If you get an error saying you don't have one of those modules, install it with sudo pip install. ie:

	sudo pip install mechanize
	sudo pip install beautifulsoup4
	sudo pip install argsparse
	sudo pip install lxml

Installation
------------
Make sure getweather is executable and copy it to /usr/local/bin to access it anywhere, ie:
	
	chmod a+x ./getweather && sudo cp ./getweather /usr/local/bin/

Usage
-----
usage: getweather [-h] [-f [FORMAT]] [-l [LOCATION]] [-i]

getweather

optional arguments:

  -h, --help            show this help message and exit
  
  -f [FORMAT], --format [FORMAT]
  
                        Format string for output.
                        
                            %d - description of current weather (eg:'Light rain')
                            
                            %t - current temperature (eg: '4')
                            
                            %w - current wind speed (eg: '5')
                            
                            %h - current humidity (eg: '90%')
                            
                            %p - current chance of precipitation (eg: '50%')
                            
  -l [LOCATION], --location [LOCATION]
  
                        Location of weather data. Default is 'Waterloo+Ontario'. Must be formatted for use in a URL.
                        
  -i, --imperial        Set measurement system for all units to imperial. Default is metric.

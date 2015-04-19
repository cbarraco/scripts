getweather
==========

Gets the current weather conditions from accuweather.com

Dependencies
------------
getweather is written in python and uses the mechanize, beautifulsoup4, argsparse, and lxml modules.
If you get an error saying you don't have one of those modules, install it with sudo pip install. ie:

	sudo pip install mechanize beautifulsoup4 argsparse lxml

Installation
------------
Make sure getweather is executable and copy it to /usr/local/bin to access it anywhere, ie:
	
	chmod a+x ./getweather && sudo cp ./getweather /usr/local/bin/

Usage
-----
usage: getweather [-h] [-f [FORMAT]] [-l [LOCATION]] [-i]

  -h, --help
  
  	show this help message and exit
  
  -f [FORMAT], --format [FORMAT]
  	
  	%d - description of current weather (eg:'Sunny')
        %t - current temperature (eg: '4')
        %w - current wind speed (eg: '5'). Imperial is in mph and Metric is in kph.
        %h - current humidity (eg: '90%')
        %p - amount of precipitation in the last 24 hours (eg: '5'). Imperial is in inches and Metric is in mm.
        Default format string is '%d %t'.

  -i, --imperial
  
  	Set measurement system for all units to imperial. Default is metric.  
                          
  -l [LOCATION], --location [LOCATION]
                        
	Location to get weather data for (eg:'Waterloo Ontario Canada').
	Searches accuweather.com for this location; the search result needs to be unique, so specify your city, province/state, and country.
	The -u command line argument is much faster and is recommended.

  -u [URL], --url [URL]

	URL to the current weather page on accuweather.com (eg:'http://www.accuweather.com/en/ca/waterloo/n2l/current-weather/55073').
	Use this if you want to skip searching for your location (much faster).

  	
  

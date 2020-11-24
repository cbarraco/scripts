# pingen

Repeatably generates the same n-digit pin from any string with optional salt. Basically a SHA256 hash code generator but the output is a zero padded integer modulo 10^n. The idea is that if you forget the pin you can regenerate it if you can remember the text that was used which should be easy. Also handy for generating ports for Docker containers using the container name as the text.

Default pin length is 4 and default salt is empty string

## Examples:

### Generate a 4 digit pin for my garage door

`python3 ./pingen "My garage door"`

output: `1831`


### Generate a 6 digit pin for my phone

`python3 ./pingen "My OnePlus Phone" 6`

output: `730078`


### Generate a 8 digit pin for my front door with a salt

`python3 ./pingen "My front door" 8 "password123"`

output: `46151784`

### Generate a port number for my rabbitmq Docker container

`python3 ./pingen "rabbitmq"`

output: `5975`

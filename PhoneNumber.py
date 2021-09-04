
#Input: +919975529245

#Output:Enter mobile number with Country Code:+919975529245
#('Asia/Calcutta',)
#First  time Sim is of Company: Airtel
#India
#Valid Mobile Number: True
#Checking possibility of a number: True

#Description:Enter mobile number from user and gives full details of that number
#Date: 04/09/2021
#Author: Shubham Lodha


import phonenumbers 
from phonenumbers import carrier, geocoder,timezone

mobileNo=input("Enter mobile number with Country Code:")
mobileNo=phonenumbers.parse(mobileNo)

#get timezone of a number
print(timezone.time_zones_for_number(mobileNo))

#get carriers of a number
print("First  time Sim is of Company:",carrier.name_for_number(mobileNo,"en"))

#get region infornmation
print(geocoder.description_for_number(mobileNo,"en"))

#validating for a number
print("Valid Mobile Number:",phonenumbers.is_valid_number(mobileNo))

#checking Posibility  of number
print("Checking possibility of a number:",phonenumbers.is_possible_number(mobileNo))

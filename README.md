# FinalProject-COMP3000

Group 4: Kyeongjin Jeon, Merial Kim 

 

# Background: 

Currently, the world has encountered unprecedented pandemic. Approximately, 1.05 million people have died, and 36 million people have been infected from COVID-19. 
The disease not only caused trouble in the medical field but extended to different areas: economy, education, labor market, etc. 
According to the study of the case-fatality ratio of COVID-19 by Johns Hopkins University, the United States has approximately 2.8 percent per 100 confirmed cases. 
The fatality rate is not soaring compared to other epidemics such as H1N1 in 2009 or Spanish flu in 1918. 
However, the factor that needs to be considered for this pandemic is the transmission rate. 
Although there are no specific values reported to the public, CDC and epidemiologists warned that the disease transmits easily between humans.  

# Project Description:

Considering the ongoing crisis, we decided to write a program that can be applicable to pick out passengers with the COVID-19 symptoms in an arriving plane at the airport.
There will be a total of two tests conducted: a general test and a randomized test. A general test will have a temperature check and a screening test. 
On the other hand, a randomized test will select a few passengers according to the seating sections in the airplane to get diagnostic testing. 
After an individual completes a general test, a result will be displayed in the program. There will be two kinds of results: red and green. 
A red result indicates that a passenger has the potential of carrying COVID-19. A green result indicates that a passenger does not have the potential of carrying COVID-19. 
When a green result is displayed, a code will be displayed which will be used to get clearance for any checkpoints in the airport.  

# Function Description:

Data Modification: 
- Function which receives the information regarding the airplane, passengers and total number of people boarding. 
- Also, it will organize and modify the data into an array to facilitates the testing 

Temperature Check:
-A function which communicates with Arduinos import a temperature data of a user. 

Screening Testing:
- A function which provides a screening test regarding symptoms related to COVID-19  

A Randomized Diagnostic Testing 
- A function that randomly chooses a few passengers in an airplane according to the seating section for a diagnostic test. 

Summary:
- A function that displays the result of the test conducted by user 
- A general test will display the following results below
  - Red result - will display a message that a user did not pass the test and ask a user to report to a nearby staff with the result 
  - Green result - will display a message that a user passed the test and a code which will be used to get clearance for any checkpoint in the airport. 
- A diagnostic test will display a message asking a user to report a staff  
 
 

 

Empathy Map 

![Empathy Map](https://github.com/szk0151/FinalProject-COMP3000/blob/master/Empathy%20map.PNG)

 

#Description:Enter PDF name and listen the whole pdf through computer speaker
#Date: 14/09/2021
#Author: Shubham Lodha

import PyPDF2
pdfReader=PyPDF2.PdfFileReader(open('Hey.pdf','rb')) #Mentioned here pdf name with proper extensions

import pyttsx3
speaker=pyttsx3.init()

for page_num in range(pdfReader.numPages):
    text=pdfReader.getPage(page_num).extractText()
    speaker.say(text)
    speaker.runAndWait()
speaker.stop()

speaker.save_to_file(text,'audio.mp3')
speaker.runAndWait()
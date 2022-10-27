from pickle import GET
import pyttsx3  # pip install pyttsx3
import speech_recognition as sr  # pip install speechRecognition
import datetime
import wikipedia  # pip install wikipedia
import webbrowser
import os
import smtplib
from requests import get
import pywhatkit
import sys
import pyjokes


engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[1].id)
engine.setProperty('voice', voices[1].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour >= 0 and hour < 12:
        print("Good Morning!")
        speak("Good Morning!")


    elif hour >= 12 and hour < 18:
        print("Good Afternoon!")
        speak("Good Afternoon!")

    else:
        print("Good Evening!")
        speak("Good Evening!")

    print("I am Jarvis Sir. Please tell me how may I help you")
    speak("I am Jarvis Sir. Please tell me how may I help you")
    #speak("I have never seen so handsome man like you sir")
    


def takeCommand():
    # It takes microphone input from the user and returns string output

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)

    try:
        print("Recognizing...")
        #speak("Recognizing")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")

    except Exception as e:
        # print(e)
        #speak("Say that again please...")
        print("Say that again please...")
        return "None"
    return query


def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.login('yourname@gmail.com', 'yourpassword')
    server.sendmail('youremail@gmail.com', to, content)
    server.close()


if __name__ == "__main__":
    wishMe()
    while True:
        #if 1:
        query = takeCommand().lower()

        # Logic for executing tasks based on query
        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'open youtube' in query:
            
            webbrowser.open("youtube.com")

        elif 'open google' in query:
            print("Sir,What should I search on Google")
            speak("Sir,What should I search on Google")
            ca = takeCommand().lower()
            webbrowser.open(f"{ca}")

        elif 'open stackoverflow' in query:
            webbrowser.open("stackoverflow.com")
            
        elif 'open geeksforgeeks' in query:
            webbrowser.open("geeksforgeeks.com")
            
        elif 'open instagram' in query:
            webbrowser.open("instagram.com")

        elif 'play music' in query:
            music_dir = 'D:\\songs'
            songs = os.listdir(music_dir)
            print(songs)
            os.startfile(os.path.join(music_dir, songs[0]))

        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir, the time is {strTime}")
        elif 'open code' in query:
            codePath = "D:\VS Code\Microsoft VS Code\Code.exe"
            os.startfile(codePath)
        elif 'open notepad' in query:
            codpath = "C:\\Windows\\system32\\notepad.exe"
            os.startfile(codpath)
            
        # To close application
        
        elif 'close notepad' in query:
            speak("Okay sir,closing notepad")
            os.system("taskkill /f /im notepad.exe")
            
        elif 'open command prompt' in query:
           os.system('start cmd')
        elif 'IP address' in query:
            ip = get('https://ipapi.co').text
            speak(f"your IP address is (ip)")  #f- formated string
        elif 'send message' in query:
            kit.sendwhatmsg("+91xxxxxxxxx", "Testing",)
            
        elif 'play kesariya song on youtube' in query:
            pywhatkit.playonyt('Kesariya')
        elif 'play deva deva song on youtube' in query:
            pywhatkit.playonyt('Deva Deva Brahmastra')

        elif 'email to aman' in query:
            try:
                speak("What should I say?")
                content = takeCommand()
                to = "amanyourEmail@gmail.com"
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry my friend aman bhai. I am not able to send this email")
            
        #To find a joke
        
        elif 'tell me a joke' in query:
            joke = pyjokes.get_joke()
            speak(joke)    
        # elif 'shut down the system' in query:
        #     os.system("shutdown /s /t 1")
            
        # elif "sleep the system" in query:
        #     os.system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0")
        
        #To exit from jarvis
        
        elif 'no thanks' in query:
            speak("Nice talking to you sir,have a good day")
            sys.exit()
            
        speak("Sir, do you have any other work")

import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[0].id)
engine.setProperty('voice',voices[0].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("Good Morning")
    elif hour>=12 and hour<18:
        speak("Good Afternoon")
    else:
        speak("Good evening")
    speak("Helloooo Sir, I am Jarvis. Please tell How may I help you")

def takeCommand():
    # It Takes Microphone input from the user and returns string output

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1  #  Seconds of non-speaking audio before a phrase is considered complete
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio,language = 'en-in')
        print(f"User Query: {query}\n")
    
    except Exception as e:
        # print(e)
        print("Say that Again")
        return "None"

    return query

if __name__== "__main__":
    wishMe()

    while True:
        query = takeCommand().lower()

        #Logic for executing tasks based on query

        if 'what is' or 'who is' in query:
            speak("Searching wikipedia")
            query = query.replace("Wikipedia","")
            results = wikipedia.summary(query, sentences= 2)
            speak("According to wikipedia")
            print(results)
            speak(results)

        elif 'open youtube' in query:
            webbrowser.open("youtube.com")

        elif 'open google' in query:
            webbrowser.open("google.com")

        elif 'open stackoverflow' in query:
            webbrowser.open("stackoverflow.com")

        # elif 'play music' in query:
        #     music_dir = 'D:\\'
        #     songs = os.listdir(music_dir)
        #     print(songs)
        #     os.startfile(os.path.join(music_dir,songs[0]))

        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir, The time is : {strTime}\n")

        elif 'open code' in query:
            codePath = "C:\\Users\\vatsa\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"
            os.startfile(codePath)

        elif 'play music' in query:
            webbrowser.open("https://music.youtube.com/watch?v=T94PHkuydcw&list=RDAMVMT94PHkuydcw")       

        elif 'open music' in query:
            webbrowser.open("https://music.youtube.com/")

        elif 'who are you' in query:
            speak("I am Jarvis -version 1.1, your personal Assistant. How may I help you sir?")

        elif 'how are you jarvis' in query:
            speak("I am fine sir. How may I help you?")

        # elif  in query:
        #     webbrowser.open_new_tab("google.com")

        elif 'quit' in query:
            exit()

       
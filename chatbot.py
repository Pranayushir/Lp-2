import nltk
from nltk.chat.util import Chat, reflections

pairs= [
    [r"my name is (.*)",["Hello %1, How are you today ?"]],
    [r"hi|hey|hello",["Hello", "Hey there",]],
    [r"what is your name ?",["I am a bot created by Analytics Vidhya. you can call me crazy!",]],
    [r"how are you ?",["I'm doing goodnHow about You ?",]],
    [r"exit",[""]]
]
# print(reflections)
chat = Chat(pairs,reflections)
chat.converse()
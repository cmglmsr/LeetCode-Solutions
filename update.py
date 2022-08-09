import subprocess
import os
import re

filename = "test.md"
currentdir = "C:\\Users\\cemg\\Desktop\\LeetCode-Solutions"

def read_files():
    files = os.listdir(currentdir)
    filedict = {}
    for file in files:
        if not (file == '.git' or file == '.vscode' or file == 'update.py' or file == 'README.md'):
            num = re.search('(?:(\-+\s)+(\w*))', file)[2]
            name = re.search('(\w+\s)*', file)[0].strip()
            filedict[name] = num
    return filedict


def update_md():
    with open(filename, "w") as f:
        f.write('hi')

read_files()

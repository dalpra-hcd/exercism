def is_isogram(string):
    string = "".join(filter(str.isalpha, string))
    return len(string) == len(set(string.lower()))

# c_67_strings

## DESCRIPTION

In CS50 strings data type was created to make the beginning easier. There is no `string` data type in C programming language.

Under the hood of sc50 library the string data type is created as the following code:

```c
typedef char *string;
```

So string is a character pointer. It points to the strings firts characters' address and functions like printf will start to print out all the characters from this address until it reaches the `nul` (\0) character. The C compiler adds the nul character to the end of the string automatically.

```c
char *string = "Hi!";
```

`Hi!` will be saved somewhere into the memory and pointer named "string" will get the first characters' address.

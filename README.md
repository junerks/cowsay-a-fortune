Just a stupid lil linux cli program where you can make cowsay say a fortune output with any of the animals specified in the script.

![screenshot](img/s3.png)

Instructions:

- Clone the repo
  ```
  git clone https://github.com/junerks/cowsay-fortune.git
  ```
- cd to the src folder and compile the c file
  ```
  gcc -o cowsay-fortune cowsay-fortune.c
  ```
  or
  ```
  clang -o cowsay-fortune cowsay-fortune.c
  ```
- Copy the file to your local bin folder (mine is /usr/local/bin/)
- Restart your shell and run
  ```
  cowsay-fortune
  ```

![screenshot](img/s1.png)

![screenshot](img/s2.png)

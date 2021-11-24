* Links
  * Harvard CS50 C lecture (2020): https://www.youtube.com/watch?v=zYierUhIFNQ
    * If you are feeling lost with C, make some time to watch this lecture, it's a really well put together summary of a lot of what you need to know when getting started
  * The GNU C Reference manual: https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html
  * 

* Start `ex00`
  * First thing… we are using `write()`… so it's time to RTFM!!!
    * https://en.wikibooks.org/wiki/C_Programming/POSIX_Reference/unistd.h/write
    * It took me a bit to realise that the specific variant of `write()` that we are allowed to use  is from the `unistd` library.
    * unistd is an abbreviation of UNIX Standard, which means that it is C code for interacting with a UNIX compliant - or POSIX - operating system, which in our case is macOS. 
      * In particular we are using the `write()` command to trigger a result in our operating system which is effectively text returned inside the shell terminal where we run the program
  * Now that we know what `write()` and `unistd` are…
    * What did we learn from the manual from `write()`?
      * `write()` accepts 3 arguments (aka parameters)
        * those are comma separated in the function prototype in the documentation linked above: `write(int fd, const void *buf, size_t nbytes);`
          * `int fd`
            * This parameter is of the type `int`eger, and is stored as the variable labelled `fd`
            * Basically, per the docs, if we set this to `1`, it tells the operating system to write the result to _standard output_ - a concept we may have learned in Shell! :benny:
          * `const void *buf`
            * This is a special format for a pointer which is effectively a _memory address_
            * What is a memory address? It is literally the address by which the computer can find the location in the computer's RAM where the data is stored
            * Within our C code, we are able to refer to this data in memory using a variable of the type `char`, but the operating system - macOS - doesn't know anything about our C variable. So, we have to send the system the _actual memory address_ where the data (our character) is stored.
          * `size_t nbytes`
            * This tells the operating system how many bytes of memory starting from the memory address already given we should "write". As we are only looking to print one character – which is 1 byte in our 8 bit text encoding scheme (read on ASCII & UTF-8!) - so the value is simply 1.
* Start `ex01`
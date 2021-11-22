# Day 00

* Links
	* Vogsphere guide
		* https://cdn.discordapp.com/attachments/910321983873499166/912137084511350826/vogsphere-doc.en.pdf
	* playme video playlist
		* https://www.youtube.com/watch?v=a14XiTXjOow&list=PLVQYiy6xNUxxd5TiZL87_v6JOx61umsUz&index=1
	* S-00 videos
		* https://www.youtube.com/playlist?list=PLVQYiy6xNUxxhvwi0PGmXb5isUdVwmsg8

* Log into Intra
	* Find first module PDF
	* Copy GitHub directory structure from random person's GitHub
		* _Ed: This was before I knew to clone the project on Intra as the parent working dir for the assignment and its `ex00` etc. folders :)_
* Start ex00
	* Use vim to create file `vi z`
		* _Ed: You don't have to use `vim` AKA `vi` here, I'm just trying to practice vimskillz…_
	* `i` to insert
	* `Z`
	* hit Escape to leave insert mode
	* `:wq` to write&quit
* Start ex01
	* To create a file exactly 40 bytes
		* dd if=/dev/zero of=testShell00 bs=40 count=1
			* `dd` is a command that copies disk blocks
			* `man dd`!!!!!!
			* `if=` and `of=` specify input and output files
			* `/dev/zero` is a special UNIX file that is just a stream of endless zeroes that doesn't actually take up any disk space
			* `bs=` sets a size in bytes to copy (this is how you "touch" a file with a specific size)
	* To set mod date/time to Jun 1 23:42 (and 11 seconds but who's counting…)
		* touch -a -m -t 202106012342.11 testShell00
			* `man touch`!!!!!!
	* To set perms
		* `chmod 455 testShell00`
    * 	Tar per PDF instructions
		* `tar -cf testShell00.tar testShell00`
* Start ex02
	* Run commands…
		* `mkdir test0`
		* `mkdir test2`
			* Did you notice the `d` before the permissions on these files? 
		* `dd if=/dev/zero of=test1 bs=4 count=1`
		* `dd if=/dev/zero of=test3 bs=1 count=1`
		* `dd if=/dev/zero of=test4 bs=2 count=1`
			* See `ex01` for deets on `dd` or just `man dd`!!!!!!
		* `ln test3 test5`
			* Did you notice the `2` in the column between the permissions and the user for these files?
				* I had to google this… turns out this is the number of links to the file… this was my clue to make a "hard link" with `ln`
		* `ln -s test0 test6`
			* The `->` in the `ls -l` output denotes a symbolic link	
		* chmod 715 test0
		* chmod 714 test1
		* chmod 504 test2
		* chmod 404 test3
		* chmod 641 test4
		* chmod -h 777 test6
			* `-h` tells chmod (and touch) to edit *the symlink*, not the file it links to (i.e. `test0`)
		* touch -a -m -t 202106012047.11 test0
		* touch -a -m -t 202106012146.11 test1
		* touch -a -m -t 202106012256.11 test2
		* touch -a -m -t 202106012344.11 test3
		* touch -a -m -t 202106012343.11 test4
		* touch -a -m -t -h 202106012220.11 test6
	* Googled how to set attributes on the symbolic link without changing the original
		* `touch` and `chmod` both accept `-h` as a switch to do this
	* 2nd column of `ls -l` shows number of hard links to file, which is the clue to do `link test3 test5`
* Start ex03
	* Fortunately I know klist command well…
	* run: klist
		* check that you have some output, if not run `kinit` and log in with your 42 account
	* once you have a result from `klist`:
		* `klist > klist.txt`
		* `cat klist.txt` to make sure it containts the output of `klist`
* Start ex04
	* Stole another students answer - they used 4 flags for `ls` but the instructions state "What has not been asked for should not be done!", so I stripped it back to two:
	* `ls -mt`
	* what does this do? RTFM! = `man ls` and look for `-m`, `-t`
* Start ex05
	* Googled this…
		* `git log -n 5` to get last 5 commits
		* add on `--format="%H"` to print out only the hash
		* create 2 line file `git_commit.sh`
			* `#/bin/sh` as this is the convention for starting a shell script
			* `git log -n 5 --format="%H"`
* Start ex09
	* Conversation in Discord got me interested… TIL that magic files even exist
	* Read a bit about how to format magic file from man magic… noted about offset as the task is to create a file with the 42 string offset 42 bytes from start of file 
	* While most magic files are more complex, the syntax _can_ be simple to search for a static string at a set offset
		* `41	string 42	42 file`
			* first up: 41 because we start from 0!
			* next `string` is a simple operator for magic files which just looks for a static string, in this case `42`
			* last bit is whatever description you want to define for matching this rule!
* Start ex08
	* I've used `find` a bunch, but I didn't know you could use `-or` to apply different actions to different matches!
		*  `find . -name "*~" -print -delete -or -name "#*#" -print -delete -or -name "#" -print -delete`
			* `-name` looks for a file matching a name, where * can be used as a wildcard to match anything (or nothing) in its place
			* hence these patterns for 
				* "ends in ~", 
				* "starts and ends in #", 
				* and the special edge case `#` which technically starts and ends with # but doesn't match `#*#` ;-)
		* Tested by deleting a bunch of files matching those rules created with e.g. `touch "@~"` (using quotes around the special charactes we are searching for!)
* Start ex07
	* Followed the ingo in the photo of the whiteboard that Martin wrote on, and `man patch`
	* `patch` and `diff` can be used respectively to create `b` from `a` + `sw.diff` and `sw.diff` from `a` + `b` respectively
	* `a` and `sw.diff` are in the `resources.rar.gz` file on the project page on Intra!
* Google how to clone existing local data to a remote Git repo
	* Failed at this and just moved files into empty clone
	* Maybe try this later… 
		* https://stackoverflow.com/questions/2411031/how-do-i-clone-into-a-non-empty-directory
* Watch 42 Git intro videos
	* Commands covered…
		* init
		* add
		* rm
		* commit
		* status
		* diff



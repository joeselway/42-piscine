# Day 00

* Links
	* https://cdn.discordapp.com/attachments/910321983873499166/912137084511350826/vogsphere-doc.en.pdf
	* playme video
		* https://www.youtube.com/watch?v=a14XiTXjOow&list=PLVQYiy6xNUxxd5TiZL87_v6JOx61umsUz&index=1
	* S-00 videos
		* https://www.youtube.com/playlist?list=PLVQYiy6xNUxxhvwi0PGmXb5isUdVwmsg8
		* 

* Log into Intra
	* Find first module PDF
	* Copy GitHub directory structure from random person's GitHub
	* Start ex00
		* Use vim to create file `vi z`
		* `i` to insert
		* Enter Z
		* Esc, :wq
	* Start ex01
		* To create a file exactly 40 bytes
			* dd if=/dev/zero of=testShell00 bs=40 count=1
		* To set mod date to Jun 1
			* touch -a -m -t 202106012342.11 testShell00
		* To set perms
			* chmod 455 testShell00
	    * 	Tar per PDF
			* tar -cf testShell00.tar testShell00
	* Start ex02
		* Run commands…
			* mkdir test0
			* mkdir test2
			* dd if=/dev/zero of=test1 bs=4 count=1
			* dd if=/dev/zero of=test3 bs=1 count=1
			* dd if=/dev/zero of=test4 bs=2 count=1
			* ln test3 test5
			* ln -s test0 test6
			* chmod 715 test0
			* chmod 714 test1
			* chmod 504 test2
			* chmod 404 test3
			* chmod 641 test4
			* chmod -h 777 test6
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
		* 

 

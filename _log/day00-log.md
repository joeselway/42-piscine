#Day 00

* Links
	* playme video
		* https://www.youtube.com/watch?v=a14XiTXjOow&list=PLVQYiy6xNUxxd5TiZL87_v6JOx61umsUz&index=1
	* S-00 videos
		* https://www.youtube.com/playlist?list=PLVQYiy6xNUxxhvwi0PGmXb5isUdVwmsg8

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
		* dd if=/dev/zero of=test5 bs=1 count=1
		* ln -s test0 test6
		* chmod 715 test0
		* chmod 714 test1
		* chmod 604 test2
		* chmod 404 test3
		* chmod 641 test4
		* chmod 404 test5
		* chmod 777 test6
		* touch -a -m -t 202106012047.11 test0
		* touch -a -m -t 202106012146.11 test1
		* touch -a -m -t 202106012256.11 test2
		* touch -a -m -t 202106012344.11 test3
		* touch -a -m -t 202106012343.11 test4
		* touch -a -m -t 202106012344.11 test5
		* touch -a -m -t 202106012220.11 test6
	* Google how to set attributes on the symbolic link without changing the original
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

 

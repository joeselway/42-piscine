# Day 01

* Links
  * …

* Register for `shell01` and download the subject PDF
* Start ex00
  * Ask around who knows what the deal is with the event not being available in the calendar on Intra yet…
    * Apprently it will appear on Wednesday ¯\_(ツ)_/¯ 
* Start `ex01`
  * Looks like a cat `/etc/groups` with a grep for the user
    * However the hint is `man id` so we should probably be using the `id` command somehow…
  * Noted that there is no newline after the output of the script (last command prompt on same line)
  * Looked at someone's solution
    * Discovered the `tr` command!
      * They have used this to comma separate the output from `id` as well as trim the newline!
      * I was looking at familiar tools like `cut` and `sed` so this was a good TIL!
    * Read `man tr` thoroughly and understood so that I'm not cheating!!
* Start `ex02`
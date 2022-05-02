# ip2 variant for self-ip known
Utility for linux bases systems, as an auxiliary variant to the ip command, which is a restrictive dependency of this project, if you have ip then ip2 will work.

## Description
When we want to know our own ip, without the hassle of reading and executing a very long output command, this one is usable instead:

    $ ip2
    192.168.1.10

This utility replaces the use of the `ip a` command on linux based systems but uses the ip command, trimming the output to the ip's it displays as a result, in short the command that shortcuts the use of ip2 is as follows: :

- `ip a | sed -n 's/inet \([0-9][0-9][0-9].[0-9][0-9][0-9].[0-9].[0-9][0-9]*\)\/24/\1/p' | sed 's/brd.*//g' | sed 's/ //g' ` 

Was compiled for android 5 and 6 versions of termux, and also for the latest version, each one is in its required folder if you want to save compilation time on the device, it was also compiled in Debian Buster, the idea is to compile it and leave it in the binaries folder so it remains as an accessible tool. in Termux usually is:

- `/data/data/com.termux/files/usr/bin/`

## Usage

In /usr/bin/ located
```sh
ip2
```
in self-path located
```sh
./ip2
```
## Author
huguitovi ([@fornwall](https://github.com/huguitovi)).

## License

SPDX-License-Identifier: [GPL-3.0-or-later](https://spdx.org/licenses/GPL-3.0-or-later.html)

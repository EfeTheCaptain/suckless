#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "   "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)\
	X("^c#baa014^", "/home/efe/.local/bin/disk.sh", 900, 19)\
	X("^c#baa014^", "/home/efe/.local/bin/memory.sh", 3, 18)\
	X("^c#baa014^", "/home/efe/.local/bin/colored-cputemp.sh", 2, 17)\
	X("^c#baa014^", "/home/efe/.local/bin/colored-cpuusage.sh", 2, 21)\
	X("^c#baa014^", "/home/efe/.local/bin/colored-battery.sh", 45, 14)\
	X("^c#baa014^", "/home/efe/.local/bin/volume.sh", 0, 15)\
	X("^c#1d8996^", "/home/efe/.local/bin/colored-weather.sh", 3600, 12)\
	X("^c#d94f3d^", "/home/efe/.local/bin/date.sh", 7200, 13)\
	X("^c#baa014^", "/home/efe/.local/bin/blinkingtime.sh", 1, 11)\
	X("^c#a117d4^", "/home/efe/.local/bin/wifi.sh", 90, 10)\
	X("^c#7217d4^", "/home/efe/.local/bin/prayertimes.sh", 300, 20)	 
#endif  // CONFIG_H

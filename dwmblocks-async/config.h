#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

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
	X("", "/home/efe/.local/bin/disk.sh", 900, 19)\
	X("", "/home/efe/.local/bin/memory.sh", 4, 18)\
	X("", "/home/efe/.local/bin/cpu_temp.sh", 3, 17)\
	X("", "/home/efe/.local/bin/cpu-usage.sh", 2, 16)\
	X("", "/home/efe/.local/bin/volume.sh", 0, 15)\
	X("", "/home/efe/.local/bin/battery.sh", 10, 14)\
	X("", "/home/efe/.local/bin/weather2.sh", 7200, 12)\
	X("", "/home/efe/.local/bin/date.sh", 7200, 13)\
	X("", "/home/efe/.local/bin/time.sh", 60, 11)\
	X("", "/home/efe/.local/bin/wifi.sh", 30, 10)\
	X("", "/home/efe/.local/bin/prayertimes.sh", 21600, 20)	 
#endif  // CONFIG_H

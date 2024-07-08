/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =  "#2e3440", /* after initialization */
	[INIT] =   "#4c566a",     /* after initialization */
	[INPUT] =  "#8fbcbb",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
	[CAPS] =   "#ebcb8b",       /* CapsLock on */
};

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int logow = 12;   /* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[] = {
   /* x    y   w   h */
   { 0,    3,  1,  3 },
   { 1,    3,  2,  1 },
   { 0,    5,  8,  1 },
   { 3,    0,  1,  5 },
   { 5,    3,  1,  2 },
   { 7,    3,  1,  2 },
   { 8,    3,  4,  1 },
   { 9,    4,  1,  2 },
   { 11,   4,  1,  2 },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 5;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "systemctl poweroff -i";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;


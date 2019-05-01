/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FuraCode Nerd Font Mono:style=Retina:size=9"
};
static const char col_gray1[]       = "#073642";
static const char col_gray2[]       = "#eee8d5";
static const char col_gray3[]       = "#839496";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#005577";
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeOut] =  { "#000000", "#00ffff" },
	[SchemeNorm] = { col_gray3, col_gray1 },
	[SchemeSel]  = { col_gray1, col_gray3 },
};
static unsigned int maxhist    = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

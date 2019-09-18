/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
			      "monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
					    /*     fg         bg       */
                                            /*  [SchemeNorm] = { "#ff003e", "#0f0fff" },
                                                [SchemeSel] = { "#facaaa", "#" },
                                                [SchemeOut] = { "#000000", "#00ffff" },*/
                                            [SchemeNorm] = { "#ff003e", "#facaaa" },
                                            [SchemeSel] = { "#facaaa", "#0f0fff" },
                                            [SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

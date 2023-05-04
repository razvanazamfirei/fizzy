#include <stdlib.h>
#define GETENV_OR_DEFAULT(E, D) ((getenv(E) != NULL) ? getenv(E) : D)

#define TTY_COLOR_HIGHLIGHT (getenv("FZY_TTY_COLOR_HIGHLIGHT") != NULL) ? atoi(getenv("FZY_TTY_COLOR_HIGHLIGHT")) : 4
// The above line defines TTY_COLOR_HIGHLIGHT as the value of the TTY_COLOR_HIGHLIGHT
// environment variable, or "4" if it is not set.


#define SCORE_GAP_LEADING -0.005
#define SCORE_GAP_TRAILING -0.005
#define SCORE_GAP_INNER -0.01
#define SCORE_MATCH_CONSECUTIVE 1.0
#define SCORE_MATCH_SLASH 0.9
#define SCORE_MATCH_WORD 0.8
#define SCORE_MATCH_CAPITAL 0.7
#define SCORE_MATCH_DOT 0.6

/* Time (in ms) to wait for additional bytes of an escape sequence */
#define KEYTIMEOUT (getenv("FZY_KEYTIMEOUT") != NULL) ? atoi(getenv("FZY_KEYTIMEOUT")) : 25

#define DEFAULT_TTY ((getenv("FZY_TTY") != NULL) ? getenv("FZY_TTY") : "/dev/tty")
#define DEFAULT_PROMPT (getenv("FZY_PROMPT") != NULL) ? getenv("FZY_PROMPT") : "> "
#define DEFAULT_MARKER (getenv("FZY_MARKER") != NULL ? getenv("FZY_MARKER") : "*")
#define DEFAULT_POINTER ((getenv("FZY_POINTER") != NULL) ? getenv("FZY_POINTER") : ">")
#define DEFAULT_NUM_LINES (getenv("FZY_NUM_LINES") != NULL) ? atoi(getenv("FZY_NUM_LINES")) : 10
#define DEFAULT_WORKERS (getenv("FZY_WORKERS") != NULL) ? atoi(getenv("FZY_WORKERS")) : 0
#define DEFAULT_SHOW_INFO (getenv("FZY_SHOW_INFO") != NULL) ? atoi(getenv("FZY_SHOW_INFO")) : 0
#define DEFAULT_DELIMITER (getenv("FZY_DELIMITER") != NULL) ? *getenv("FZY_DELIMITER") : '\n'
#define DEFAULT_BENCHMARK (getenv("FZY_BENCHMARK") != NULL) ? atoi(getenv("FZY_BENCHMARK")) : 0
#define DEFAULT_SCORES (getenv("FZY_SCORES") != NULL) ? atoi(getenv("FZY_SCORES")) : 0
#define DEFAULT_SCROLLOFF (getenv("FZY_SCROLLOFF") != NULL) ? atoi(getenv("FZY_SCROLLOFF")) : 0
#define DEFAULT_FILTER (getenv("FZY_FILTER") != NULL) ? getenv("FZY_FILTER") : NULL
#define DEFAULT_INIT_SEARCH (getenv("FZY_INIT_SEARCH") != NULL) ? getenv("FZY_INIT_SEARCH") : NULL



#define DEFAULT_PAD (getenv("FZY_PAD") != NULL) ? atoi(getenv("FZY_PAD")) : 0
#define DEFAULT_MULTI (getenv("FZY_MULTI") != NULL) ? atoi(getenv("FZY_MULTI")) : 0
#define DEFAULT_CYCLE (getenv("FZY_CYCLE") != NULL) ? atoi(getenv("FZY_CYCLE")) : 0
#define DEFAULT_TAB_ACCEPTS (getenv("FZY_TAB_ACCEPTS") != NULL) ? atoi(getenv("FZY_TAB_ACCEPTS")) : 0
#define DEFAULT_RIGHT_ACCEPTS (getenv("FZY_RIGHT_ACCEPTS") != NULL) ? atoi(getenv("FZY_RIGHT_ACCEPTS")) : 0
#define DEFAULT_LEFT_ABORTS (getenv("FZY_LEFT_ABORTS") != NULL) ? atoi(getenv("FZY_LEFT_ABORTS")) : 0
#define DEFAULT_NO_COLOR (getenv("FZY_NO_COLOR") != NULL) ? atoi(getenv("FZY_NO_COLOR")) : 0
#define DEFAULT_REVERSE (getenv("FZY_REVERSE") != NULL) ? atoi(getenv("FZY_REVERSE")) : 0

#define DEFAULT_COLORS "b6b1b2b40"
#define NC "\x1b[0m" /* Reset attributes */

/* Color indices: colors (from FZY_COLORS env var) will be parsed
 * exactly in this order. See tty_interface.c */
#define PROMPT_COLOR 0
#define POINTER_COLOR 1
#define MARKER_COLOR 2
#define SEL_FG_COLOR 3
#define SEL_BG_COLOR 4
#define COLOR_ITEMS_NUM 5
#define MAX_COLOR_LEN 48

#define VERSION "1.3"

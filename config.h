#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod1Mask
#define BORDER_COLOR "#116394"
#define BORDER_WIDTH 0

const char* menu[]    = {"rofi", "-show", "run",                    0};
const char* brow[]    = {"firefox",                                 0};
const char* term[]    = {"st",                                      0};
const char* emacs[]   = {"emacs",                                   0};
const char* scr[]     = {"/home/alex/bins/scr",                     0};
const char* scrc[]    = {"/home/alex/bins/scr", "c",                0};
const char* scrg[]    = {"/home/alex/bins/scr", "g",                0};
const char* briup[]   = {"bri", "10", "+",                          0};
const char* bridown[] = {"bri", "10", "-",                          0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};

static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},
    
    {MOD,  XK_i,  win_half,  {.com = (const char*[]){"n"}}},
    {MOD,  XK_e,  win_half,  {.com = (const char*[]){"s"}}},
    {MOD,  XK_o,  win_half,  {.com = (const char*[]){"e"}}},
    {MOD,  XK_n,  win_half,  {.com = (const char*[]){"w"}}},

    {MOD,  XK_Up,     win_move,  {.com = (const char*[]){"move", "n"}, .i = 110}},
    {MOD,  XK_Down,   win_move,  {.com = (const char*[]){"move", "s"}, .i = 110}},
    {MOD,  XK_Right,  win_move,  {.com = (const char*[]){"move", "e"}, .i = 110}},
    {MOD,  XK_Left,   win_move,  {.com = (const char*[]){"move", "w"}, .i = 110}},

    {MOD|Mod4Mask, XK_i,  win_move,  {.com = (const char*[]){"resize", "n"}, .i = 110}},
    {MOD|Mod4Mask, XK_e,  win_move,  {.com = (const char*[]){"resize", "s"}, .i = 110}},
    {MOD|Mod4Mask, XK_o,  win_move,  {.com = (const char*[]){"resize", "e"}, .i = 110}},
    {MOD|Mod4Mask, XK_n,  win_move,  {.com = (const char*[]){"resize", "w"}, .i = 110}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_t,      run, {.com = menu}},
    {MOD, XK_v,      run, {.com = emacs}},
    {MOD, XK_g,      run, {.com = scr}},
    {MOD, XK_y,      run, {.com = scrc}},
    {MOD, XK_j,      run, {.com = scrg}},
    {MOD, XK_Return, run, {.com = term}},
    {MOD, XK_s,      run, {.com = brow}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|Mod4Mask,  XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|Mod4Mask,  XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|Mod4Mask,  XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|Mod4Mask,  XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|Mod4Mask,  XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|Mod4Mask,  XK_6, win_to_ws, {.i = 6}},
};

#endif

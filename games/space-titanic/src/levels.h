
// Generic

const int l_tunnel[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 14, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, -2, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1,
    17, 0, 0, 0, 0, 6, 8, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 15, 16, 0, 0, 7, 9, 0, 1, 0, 0, -1, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1};

const int l_easy[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -2, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -1, 1, -6, 1, 1, 1, 1, 1};

const int l_easy2[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, -5, 1,
    1, 0, 0, 0, 1, -2, 0, 0, 0, 0, -2, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 10, 12, 0, 10, 12, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 11, 13, 0, 11, 13, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 2, 4, 0, 0, 0, 10, 12, 0, 0, 10, 12, 0, 0, 1,
    1, 3, 5, 0, 0, 0, 11, 13, 0, 0, 11, 13, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -1, 1, -6, 1, 1, 1, 1, 1};

const int l_shaft[135] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, -7, -1, 1,
    1, 10, 12, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 11, 13, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1,
    1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, -2, 0, 0, 0, 0, 0, 0, -2, 0, 0, -1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1};

const int l_holeymoley[135] = {
    1, 1, 1, 1, -1, -7, -1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, -5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    -1, 0, 0, 0, 1, 0, 0, 0, 0, -2, 0, 0, 0, 0, -1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 0, 0, -1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
    1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, -1, 1, -1, 1, 1, 1, -6, 1, 1, 1, 1, 1};

const int l_tricky[135] = {
    1, 1, 1, -1, -7, -1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, -5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 11, 13, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -2, 0, 0, -1, 1, 0, 0, -2, 0, 0, -2, 0, 0, 1,
    1, 0, 0, 0, 0, 0, -2, 0, 0, 0, 1, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, -1, -6, 1, 1, 1, 1, 1};

const int l_tables[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -5, 1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1,
    1, 10, 12, -1, -1, 10, 12, -1, 0, 0, 0, 0, 0, 0, 1,
    1, 11, 13, 10, 12, 11, 13, -2, -1, -1, 0, 0, 0, 0, 1,
    1, -1, -1, 11, 13, -1, -1, 10, 12, -1, 0, 0, 0, 0, 1,
    1, 0, 0, -1, -1, -1, -1, 11, 13, -1, 0, 0, 0, 0, 1,
    1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 1, -1, -6, 1, 1, 1, 1, 1};

// Requires Xylia

const int l_dining[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 10, 12, 0, 10, 12, 0, 10, 12, 0, 1,
    1, 0, 0, 1, 0, 11, 13, 0, 11, 13, 0, 11, 13, 0, 1,
    1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 10, 12, 0, 10, 12, 0, 1, 2, 4, 1,
    1, 0, 0, -1, 0, 11, 13, 0, 11, 13, 0, 1, 3, 5, 1,
    1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, -5, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_wall[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, -5, 1, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, -3, -3, 1,
    1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_button[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1,
    1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1,
    1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1,
    1, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1,
    1, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1, -5, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_hippy[135] = {
    1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, -7, 1, 0, 0, -3, -3, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1,
    1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
    1, 0, 0, 1, 0, 1, 0, -5, 1, 1, 1, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
    1, 0, 0, -1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1,
    1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_uzumaki[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1,
    1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1,
    1, 0, 0, 1, 0, 1, 0, 0, 0, 1, -5, 1, 0, 0, 1,
    1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1,
    1, 0, 0, -1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1,
    1, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_grid[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, -5, 1,
    1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1,
    1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1,
    1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1,
    1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1,
    1, 0, 0, -1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1,
    1, 0, 0, -1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_gallery[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 1, 0, -3, 0, -3, 0, -3, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, -3, 0, -3, 0, -3, 0, -3, 0, 0, 1,
    1, 0, 0, 1, 0, -3, 0, -3, 0, -3, 0, 0, 1, -3, 1,
    1, 0, 0, 1, 0, -3, 0, -3, 0, -3, 0, 0, 1, -5, 1,
    1, 0, 0, 1, 0, -3, 0, -3, 0, -3, 0, 0, 1, -3, 1,
    1, 0, 0, -1, 0, -3, 0, -3, 0, -3, 0, -3, 0, 0, 1,
    1, 0, 0, -1, 0, -3, 0, -3, 0, -3, 0, 0, 0, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

// Luna + Xylia set 2

const int l_scanline[135] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1,
    1, 0, 1, 0, -3, -5, 0, 0, 1, 0, 0, 0, 10, 12, 1,
    1, 0, 1, 0, 1, 1, 1, 1, 1, -1, 0, 0, 11, 13, 1,
    1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 0, 1, 0, 1, -3, -3, -2, -3, -3, 1, 0, 1,
    1, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_bridge[135] = {
    1, 1, 0, 0, 0, 0, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1,
    1, -5, 0, 0, 0, 0, -1, 0, 2, 4, -8, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, -1, 0, 3, 5, 0, 0, 0, 0, 1,
    1, 0, 10, 12, 0, 10, 12, 0, -8, 0, -8, 0, 0, 0, 1,
    1, 0, 11, 13, 0, 11, 13, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_funky[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, -3, 0, -3, 1, 0, 0, 0, 0, 0, 10, 12, 1,
    1, 1, 1, 0, 1, -3, 1, -8, 1, 1, 1, 0, 11, 13, 1,
    1, 0, 0, -5, 1, -3, 1, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 2, 4, -1, 1, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 3, 5, 1, 1, -2, 0, 0, 0, 0, 10, 12, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 13, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_squiggle[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, 2, 4, 0, 0, 0, -1, 0, -1, 0, 0, 0, 1, -5, 1,
    1, 3, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1,
    1, 0, 0, 0, -3, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 10, 12, 0, 0, 0, -3, -2, 1, 0, 1, 0, 1, 0, 1,
    1, 11, 13, 0, 0, 0, -2, 0, -2, 0, 1, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_messy[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1,
    1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1,
    1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1,
    1, 0, 0, -8, -5, 1, 0, -2, 0, 0, 0, 0, 0, 1, 1,
    1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 0, 0, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_plinko[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, -3, -3, -3, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
    1, 0, -3, -3, -3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1,
    1, 0, -3, -3, -3, 0, 0, 0, 0, 0, -3, 0, -2, 0, 1,
    1, 0, -3, -3, -3, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1,
    1, 0, -8, -8, -8, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1,
    1, 0, 1, -5, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 0, 1, 1, 1, 1, 1};

const int l_mystery[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, -1, 0, 0, 0, 0, 0, 0, -2, 0, 0, -8, -5, 0, 1,
    1, 1, -8, 1, 1, 1, 1, 0, 1, 1, -8, 1, 1, -8, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, -3, 0, -3, 0, -3, 0, -3, 0, -2, 0, -3, 0, 1,
    1, -3, 0, -3, 0, -3, 0, -3, 0, -3, 0, -2, 0, -3, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_boss01[135] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, -9, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, -10, -10, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, -10, -10, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_accident[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1,
    1, 0, 10, 12, 0, 0, 0, -2, 0, 1, 0, 1, -5, 0, 1,
    1, 0, 11, 13, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 2, 4,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 14, -1, 0, 1, 3, 5,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 14, -1, 0, 1, 0, 0,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0};

const int l_eh[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 10, 12, 0, 1,
    1, 0, 0, 1, -1, 1, -1, 0, 0, 1, 0, 11, 13, 0, 1,
    1, 0, 0, 1, 10, 12, 0, 1, 0, 1, 0, 0, 0, 0, 1,
    1, 0, 0, 1, 11, 13, 0, 1, 0, 1, 0, 0, 0, 0, 1,
    1, 0, 1, 1, 1, 1, 1, 1, -1, 1, -3, 1, 1, 0, 1,
    1, 0, 1, -5, -8, 0, 0, -8, -3, -8, -3, -8, -2, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_experiment[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, -1, 1, 1, -1, -1, -1, 1,
    1, 0, 1, -5, 0, 0, 0, 0, 0, 0, 0, 0, -3, -3, 1,
    1, 0, 1, 1, 1, 1, 1, -1, 0, 0, 0, 0, 0, 0, 1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, -1,
    1, 1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 1,
    1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, -1, 1, 1, 1, 1, 1, 1};

const int l_long[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 10, 12, 0, 0, 0, 0, 10, 12, 0, 0, 0, 1,
    1, 0, 0, 11, 13, 0, 10, 12, 0, 11, 13, 0, 10, 12, 1,
    1, 0, 0, 0, 0, 0, 11, 13, 0, 0, 0, 0, 11, 13, 1,
    1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 1, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 1, 1, 1, 1, 1, -1, 1, 1, 1, 1, 0, 1,
    1, 0, 0, -1, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

// Jasper bits

const int l_newgrav[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 0, -3, 0, 1, -5, 1,
    1, 0, 10, 12, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 11, 13, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, -17, 0, -1, 0, 1, 0, 1, 0, 1,
    1, 0, 10, 12, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 11, 13, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_sneaky[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, -5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 0, 1,
    1, 0, -69, -18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_xrayblike[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 1, 0, 1, 0, 1, -18, -69, 0, 1, 0, 1,
    1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 1, -18, -69, 0, 1, 0, 1, -18, -69, 0, 1,
    1, 0, 0, -68, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 1, 0, 1, -18, -69, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, -5, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_sneakiest[135] = {
    1, 1, 1, 1, 1, 1, 1, -7, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, -8, 10, 12, 0, 0, 1, 1, 1, 1, 1, -8, -8, -70, 1,
    1, -8, 11, 13, -8, 0, 1, 0, -8, 0, 0, 0, 0, -18, 1,
    1, -70, -70, -18, -70, 0, 1, 0, -8, 0, 1, 0, 0, 0, 1,
    1, -5, -8, -8, -8, 0, 1, 0, -8, 0, 1, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 0, -8, 0, 1, 0, 0, 0, 1,
    1, 0, -68, 0, 0, 0, 0, -18, -70, 0, 1, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1};

const int l_trap[135] = {
    1, -7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, -1, 0, 0, 0, -8, 0, -8, 0, 0, 1,
    1, 0, 0, 0, 0, -1, 0, 1, 0, -8, -8, -8, 0, 0, 1,
    1, 0, 0, 0, 0, -1, 0, 0, 0, -70, -18, -70, 0, 0, 1,
    1, 0, 0, 0, -68, 1, 0, 1, 0, -8, -8, -8, 0, -5, 1,
    1, 0, 0, 0, 0, -1, 0, 0, 0, -8, 0, -8, 0, 0, 1,
    1, 0, 0, 0, 0, -1, 0, 1, 0, -8, -8, -8, 0, 0, 1,
    1, 0, 0, 0, 0, -1, 0, 0, 0, -8, 0, -8, 0, 0, 1,
    1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const int l_boss02[135] = {
    1, -1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, 1,
    -1, 0, 0, 0, 0, 0, 0, -9, 0, 0, 0, 0, 0, 0, -1,
    1, 0, 1, 0, 0, 0, 0, 0, -10, -10, 0, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, -10, -10, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    -1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
    1, 1, -1, 1, 1, 1, -1, -6, -1, 1, 1, 1, 1, -1, 1};

// Custom classes
class Room
{
public:
    int map[135] = {0};
    int start_x = 0;
    int start_y = 0;
    int intro_monologue = 0;
    int intro_monologue_pos = 0;
    bool gravity = false;
    void const *resolve_level;

    void setup(int current_level)
    {
        switch (current_level)
        {
        case 0:
        {
            start_x = encode_x(2);
            start_y = encode_y(6);
            intro_monologue = 1;
            resolve_level = l_tunnel;
            break;
        }
        case 1:
        {
            start_x = encode_x(8);
            start_y = encode_y(7);
            resolve_level = l_easy;
            break;
        }
        case 2:
        {
            start_x = encode_x(8);
            start_y = encode_y(7);
            resolve_level = l_easy2;
            break;
        }
        case 3:
        {
            start_x = encode_x(8);
            start_y = encode_y(7);
            resolve_level = l_holeymoley;
            break;
        }
        case 4:
        {
            start_x = encode_x(8);
            start_y = encode_y(7);
            resolve_level = l_shaft;
            break;
        }
        case 5:
        {
            start_x = encode_x(8);
            start_y = encode_y(7);
            resolve_level = l_tricky;
            break;
        }
        case 6:
        {
            start_x = encode_x(8);
            start_y = encode_y(7);
            resolve_level = l_tables;
            break;
        }

        // Xylia levels
        case 7:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            intro_monologue = 4;
            resolve_level = l_dining;
            break;
        }
        case 8:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_button;
            break;
        }
        case 9:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_wall;
            break;
        }
        case 10:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_hippy;
            break;
        }
        case 11:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_uzumaki;
            break;
        }
        case 12:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_grid;
            break;
        }

        // Luna and Xylia set 2
        case 13:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_gallery;
            break;
        }
        case 14:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_scanline;
            break;
        }
        case 15:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_bridge;
            break;
        }
        case 16:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_funky;
            break;
        }
        case 17:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_squiggle;
            break;
        }
        case 18:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_messy;
            break;
        }

        // Boss battle
        case 19:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_boss01;
            break;
        }

        // Chapter Four be like
        case 20:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_plinko;
            break;
        }
        case 21:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_mystery;
            break;
        }
        case 22:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_accident;
            break;
        }
        case 23:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_eh;
            break;
        }
        case 24:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_experiment;
            break;
        }
        case 25:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_long;
            break;
        }

        // Jasper Basper
        case 26:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_newgrav;
            intro_monologue = 9;
            gravity = true;
            break;
        }
        case 27:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_sneaky;
            gravity = true;
            break;
        }
        case 28:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_xrayblike;
            intro_monologue = 10;
            gravity = true;
            break;
        }
        case 29:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_sneakiest;
            gravity = true;
            break;
        }
        case 30:
        {
            start_x = encode_x(1);
            start_y = encode_y(7);
            resolve_level = l_trap;
            gravity = true;
            break;
        }

        // Boss 2!
        case 31:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_boss02;
            intro_monologue = 11;
            break;
        }

        // Just in case
        default:
        {
            start_x = encode_x(7);
            start_y = encode_y(7);
            resolve_level = l_sneaky;
            gravity = true;
            break;
        }
        }
        bn::memcpy(map, resolve_level, sizeof(map));
    }
};
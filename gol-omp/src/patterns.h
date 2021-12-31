#ifndef GOL_OMP_PATTERNS_H
#define GOL_OMP_PATTERNS_H

#include <SDL_rect.h>
#include <fstream>
#include <sstream>
#include <array>

#include "RuleLengthEncoded.h"

const auto BEEHIVE = RuleLengthEncoded("#N Beehive\n"
                                       "#O John Conway\n"
                                       "#C An extremely common 6-cell still life.\n"
                                       "#C www.conwaylife.com/wiki/index.php?title=Beehive\n"
                                       "x = 4, y = 3, rule = B3/S23\n"
                                       "b2ob$o2bo$b2o!");

const auto GLIDER = RuleLengthEncoded("#N Glider\n"
                                      "#O Richard K. Guy\n"
                                      "#C The smallest, most common, and first discovered spaceship. Diagonal, has period 4 and speed c/4.\n"
                                      "#C www.conwaylife.com/wiki/index.php?title=Glider\n"
                                      "x = 3, y = 3, rule = B3/S23\n"
                                      "bob$2bo$3o!");

const auto BLOCK = RuleLengthEncoded("#N Block\n"
                                     "#C An extremely common 4-cell still life.\n"
                                     "#C www.conwaylife.com/wiki/index.php?title=Block\n"
                                     "x = 2, y = 2, rule = B3/S23\n"
                                     "2o$2o!");

const auto BLINKER = RuleLengthEncoded("#N Blinker\n"
                                       "#O John Conway\n"
                                       "#C A period 2 oscillator that is the smallest and most common oscillator.\n"
                                       "#C www.conwaylife.com/wiki/index.php?title=Blinker\n"
                                       "x = 3, y = 1, rule = B3/S23\n"
                                       "3o!");

const auto R_PENTOMINO = RuleLengthEncoded("#N R-pentomino\n"
                                           "#C A methuselah with lifespan 1103.\n"
                                           "#C www.conwaylife.com/wiki/index.php?title=R-pentomino\n"
                                           "x = 3, y = 3, rule = B3/S23\n"
                                           "b2o$2ob$bo!");

const auto GLIDER_LOOP = RuleLengthEncoded("#N Glider loop\n"
                                           "#C A pattern in which two gliders are bounced back and forth along an\n"
                                           "#C ever-lengthening track.\n"
                                           "#C www.conwaylife.com/wiki/index.php?title=Glider_loop\n"
                                           "x = 73, y = 150, rule = b3/s23\n"
                                           "45bo27b$37b3o5bo27b$36bo2b2o3bobo26b$35bo5bo3bo27b$41bo3bo27b$36b2o2bo\n"
                                           "32b$25b2o11b2o33b$25b2o46b6$61bo11b$17b2o40b2ob2o9b$17b2o42bo11b3$59b\n"
                                           "2o12b$58bo2bo11b$51bo5bo3b2o10b$51bo5bo4bo10b$9b2o40bo6bo3bo10b$9b2o\n"
                                           "37bob3obo3bo2bo11b$48b5obo5bo12b$48bobo22b$52b2o17bob$52b2o9b3o5bob$\n"
                                           "52bo9bo2b2o3bobo$51b2o8bo5bo3bob$46b2o3bo15bo3bob$17b3o31bo10b2o2bo6b$\n"
                                           "20bo29b2obo10b2o7b$15b2o4bo30bo20b$18bo3bo50b$14bo4bo2bo50b$14bo3bo3bo\n"
                                           "50b$14b3obob2o51b$18bo54b$14b4o7b3o45b$14b2o8bo3bo44b$24bo4bo28bo14b$\n"
                                           "26bo3bo25b2o9b2o4b$23b3obo2bo24b2o8b3obo3b$22bo7bo23bo10bo3bo3b$22bobo\n"
                                           "3bo26b5o5bob2o4b$21b2obo3bo27bo10bo5b$21b2ob3o46b5$63b2o8b$63b2o8b4$\n"
                                           "43b3o27b$46bo26b$41b2o4bo25b$44bo3bo6b2o16b$40bo4bo2bo6b2o16b$40bo3bo\n"
                                           "3bo24b$40b3obob2o25b$44bo28b$40b4o29b$40b2o31b2$47b2o24b$47b2o24b2$33b\n"
                                           "o39b$33bobo37b$33b2o38b3$38b2o33b$37bobo33b$39bo33b2$24b2o47b$24b2o47b\n"
                                           "2$31b2o40b$29b4o40b$28bo44b$25b2obob3o40b$24bo3bo3bo40b$16b2o6bo2bo4bo\n"
                                           "40b$16b2o6bo3bo44b$25bo4b2o41b$26bo46b$27b3o43b4$8b2o63b$8b2o63b5$46b\n"
                                           "3ob2o21b$5bo10bo27bo3bob2o21b$4b2obo5b5o26bo3bobo22b$3bo3bo10bo23bo7bo\n"
                                           "22b$3bob3o8b2o24bo2bob3o23b$4b2o9b2o25bo3bo26b$14bo28bo4bo24b$44bo3bo\n"
                                           "8b2o14b$45b3o7b4o14b$54bo18b$51b2obob3o14b$50bo3bo3bo14b$50bo2bo4bo14b\n"
                                           "$50bo3bo18b$20bo30bo4b2o15b$7b2o10bob2o29bo20b$6bo2b2o10bo31b3o17b$bo\n"
                                           "3bo15bo3b2o46b$bo3bo5bo8b2o51b$obo3b2o2bo9bo52b$bo5b3o9b2o52b$bo17b2o\n"
                                           "52b$22bobo48b$12bo5bob5o48b$11bo2bo3bob3obo37b2o9b$10bo3bo6bo40b2o9b$\n"
                                           "10bo4bo5bo51b$10b2o3bo5bo51b$11bo2bo58b$12b2o59b3$11bo42b2o17b$9b2ob2o\n"
                                           "40b2o17b$11bo61b6$46b2o25b$33b2o11b2o25b$32bo2b2o36b$27bo3bo41b$27bo3b\n"
                                           "o5bo35b$26bobo3b2o2bo36b$27bo5b3o37b$27bo!");

const std::array SEARCHABLE_PATTERNS = {BEEHIVE, GLIDER, BLOCK, BLINKER, R_PENTOMINO, GLIDER_LOOP};

const std::array PATTERN_COLORS = {
        SDL_Color{0, 0, 0, 0},
        SDL_Color{255, 0, 0, 0},
        SDL_Color{0, 255, 0, 0},
        SDL_Color{0, 0, 255, 0},
        SDL_Color{255, 255, 0, 0},
        SDL_Color{255, 0, 255, 0},
        SDL_Color{0, 255, 255, 0},
        SDL_Color{255, 255, 255, 0}
};

RuleLengthEncoded load_pattern_from_file(const char *file_path);

void
detect_patterns(const std::vector<bool> &board, std::vector<uint8_t> &pattern_board, int board_width, int board_height);

void copy_to_board(int x, int y, const RuleLengthEncoded &pattern, std::vector<bool> &board, int board_width);

#endif //GOL_OMP_PATTERNS_H

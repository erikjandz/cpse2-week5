#include "terminal_tictactoe.hpp"
#include "SFML_tictactoe.hpp"

int main() {
	auto game = SFML_tictactoe();
	game.play();
}

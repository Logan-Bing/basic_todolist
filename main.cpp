#include "header.hpp"

#include "Todolist.hpp"

using json = nlohmann::json;

int main()
{
	system("clear");
    ScreenInteractive screen = ScreenInteractive::TerminalOutput();

    std::string input;

    // Composant input : texte + placeholder
    Component input_component = Input(&input, "todos");

    // Affichage simple
    auto renderer = Renderer(input_component, [&] {
        return vbox({
            input_component->Render(),
        });
    });

    screen.Loop(renderer);

	return (0);
}

#include <ftxui/component/component.hpp>  // Para los componentes
#include <ftxui/component/screen_interactive.hpp>  // Para la pantalla interactiva
#include <ftxui/dom/elements.hpp>  // Para el texto y los elementos

using namespace ftxui;

int main() {
    // Crear una pantalla interactiva
    auto screen = ScreenInteractive::TerminalOutput();
    screen.Clear();

    // Crear varios elementos de texto
    auto text1 = text("Texto en la posición (2, 1)") | bold;
    auto text2 = text("Texto en la posición (2, 3)") | color(Color::Green);

    // Crear un contenedor vertical con separaciones
    auto layout = vbox({
        text(""),  // Espacio en blanco para mover hacia abajo
        text(""),  // Espacio en blanco para mover hacia abajo
        text(""),  // Espacio en blanco para mover hacia abajo
        text1,
        text(""),
        text2,
        separator(),
        text("Presiona 'q' para salir.")
    }) | border;

   

    // Configurar el bucle de la aplicación
  

    return 0;
}
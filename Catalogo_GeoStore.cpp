#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream html("index.html");
	if(!html){
		cout<<"No se pudo crear el archivo."<<endl;
		return 1;
	}
	html << "<html>\n";
    html << "<head><title>Catálogo de Productos</title></head>\n";
     html << "<style>\n";
    html << "body { font-family: Arial; }\n";
    html << ".producto { margin-bottom: 25px; }\n";
    html << ".buscador { margin-bottom: 20px; padding: 10px; width: 300px; }\n";
    html << "</style>\n";

    // ----- Script para la barra de búsqueda -----
    html << "<script>\n";
    html << "function buscar() {\n";
    html << "  let texto = document.getElementById('search').value.toLowerCase();\n";
    html << "  let productos = document.getElementsByClassName('producto');\n";
    html << "  for (let p of productos) {\n";
    html << "    let nombre = p.getElementsByTagName('h2')[0].innerText.toLowerCase();\n";
    html << "    let desc = p.getElementsByTagName('p')[0].innerText.toLowerCase();\n";
    html << "    if (nombre.includes(texto) || desc.includes(texto)) p.style.display = 'block';\n";
    html << "    else p.style.display = 'none';\n";
    html << "  }\n";
    html << "}\n";
    html << "</script>\n";

    html << "</head>\n<body>\n";
    html << "<h1>Catálogo de Productos</h1>\n";

 html << "<input type='text' id='search' class='buscador' placeholder='Buscar producto...' onkeyup='buscar()'>\n";

    html << "<div class='producto'>\n";
    html << "<h2>Protector de Privacidad para Monitor 19.5 pulgadas</h2>\n";
    html << "<p><b>Precio:</b> L.400</p>\n";
    html << "<img src=\"Privacidad_Monitor.jpeg\" alt=\"Producto 1\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"Privacidad_Monitor2.jpeg\" alt=\"Producto 1\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Filtro de privacidad para monitor que bloquea hasta un 60% de la visibilidad lateral, evitando que otras personas vean tu pantalla.<br>Reduce reflejos, protege tus datos y brinda una experiencia de uso más segura. Ideal para oficinas, clases y trabajo remoto.</p>\n";
    html << "</div>\n";

    html << "<div class='producto'>\n";
    html << "<h2>Protector de Privacidad para Monitor 21.5 pulgadas</h2>\n";
    html << "<p><b>Precio:</b> L.500</p>\n";
    html << "<img src=\"Privacidad_Monitor.jpeg\" alt=\"Producto 2\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"Privacidad_Monitor_21.jpeg\" alt=\"Producto 2\" width=\"200\" onclick=\"window.open(this.src)\">\n"; 
    html << "<p>Filtro de privacidad para monitor que bloquea hasta un 60% de la visibilidad lateral, evitando que otras personas vean tu pantalla.<br>Reduce reflejos, protege tus datos y brinda una experiencia de uso más segura. Ideal para oficinas, clases y trabajo remoto.</p>\n";
    html << "</div>\n";
    
    html << "</body>\n";
    html << "</html>\n";

    html.close();
    cout << "Catalogo HTML generado." << endl;
	return 123;
}

/* Michael Robertson
 * mirob2005@gmail.com
 * Simple/Naive .obj parser
 * .Obj Specification used: http://www.martinreddy.net/gfx/3d/OBJ.spec
 */

#include <iostream>
#include "ObjData.h"
#include "readObjData.h"

ObjData *obj;

//int main( int argc, char **argv ){
int main(){
//    char *in = "grass_patch.obj";
    char *in = "short.obj";
//    char *in = "chess_board.obj";

    obj = NULL;
	
    if( in != NULL ){
        obj = readObjData( in );
    }else{
        cerr << "Input file is mandatory.";
    }
    if(obj != NULL){
        cout << "Object Data Created!"<< endl;
    }

//    //DEBUGGING PURPOSES - Output all arrays
//    cout << "Vertex Data:\n";
//    for(unsigned int i = 0; i < obj->vertexCount(); i++){
//        for(unsigned int j = 0; j < 3; j++){
//            cout << obj->vertices[i][j] << ", ";
//        }
//        cout << endl;
//    }
//    cout << "Vertex Normal Data:\n";
//    for(unsigned int i = 0; i < obj->vertexNormalCount(); i++){
//        for(unsigned int j = 0; j < 3; j++){
//            cout << obj->normals[i][j] << ", ";
//        }
//        cout << endl;
//    }
//    cout << "Texture Vertex Data:\n";
//    for(unsigned int i = 0; i < obj->textureVertexCount(); i++){
//        for(unsigned int j = 0; j < 3; j++){
//            cout << obj->textureVertices[i][j] << ", ";
//        }
//        cout << endl;
//    }
//    cout << "Face Data:\n";
//    for(unsigned int i = 0; i < obj->faceCount(); i++){
//        for(unsigned int j = 0; j < 3; j++){
//            for(unsigned int k = 0; k < 3; k++){
//                cout << obj->faces[i][j][k] << ", ";
//            }
//        }
//        cout << endl;
//    }

    cin.get();

	return(0);
}

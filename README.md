objParser
=========

A .obj file parser written for use in Light_Wave_GL.

As of 12/29/2012, the program is naive in that only vertices, vertex normals, texture vertices, and faces are being parsed. All other lines are ignored.

The program reads through the .obj once to determine the necessary size of the arrays and then a second time to fill the arrays.

The data is stored using the ObjData class.

.Obj Specification used: http://www.martinreddy.net/gfx/3d/OBJ.spec

Array for vertices: [vertex][x,y,z]

Array for vertex normals: [vertex][x,y,z] - Vertex index for normals not necessarily same as above

Array for texture vertices: [vertex][x,y,z], z = 0.0000

Array for faces [face][vertex][v/vt/vn]
(Only triangles are being parsed, quads are not supported as of now)

A few sample .obj files are included in the repo.

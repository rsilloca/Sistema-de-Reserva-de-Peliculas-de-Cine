#include "pch.h"
#include "Usuario.h"

char* Usuario::getUsuario(){
    return usuario;
}

void Usuario::setUsuario(char* usu){
    usuario = usu;
}

char* Usuario::getPassword(){
    return password;
}

void Usuario::setPassword(char* pas){
    password = pas;
}

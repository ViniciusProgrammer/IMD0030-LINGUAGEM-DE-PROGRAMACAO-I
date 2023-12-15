cmake_minimum_required(VERSION 3.5)
project(MeuProjeto)

# Defina o diretório de includes
include_directories(include)

# Adicione todos os arquivos .cpp ao executável
file(GLOB SOURCES "src/*.cpp")

# Crie o executável na pasta raiz do projeto
add_executable(main ${SOURCES})

#ifndef EXCEPTION_H
#define EXCEPTION_H


#include <stdexcept>
#include <string>

class ProjetException : public std::runtime_error {
public:
    ProjetException(const std::string& message) : std::runtime_error("Exception in Projet: " + message) {}
};

class ProjetPharmaceutiqueException : public ProjetException {
public:
    ProjetPharmaceutiqueException(const std::string& message) : ProjetException("Pharmaceutique Exception: " + message) {}
};

class ProjetBiologiqueException : public ProjetException {
public:
    ProjetBiologiqueException(const std::string& message) : ProjetException("Biologique Exception: " + message) {}
};


#endif // EXCEPTION_H

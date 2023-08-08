#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../include/task.h" // Chemin relatif vers le fichier d'en-tête

TEST_CASE("Task Description", "[task]") {
    Task task("Sample Task");
    REQUIRE(task.getDescription() == "Sample Task");
}
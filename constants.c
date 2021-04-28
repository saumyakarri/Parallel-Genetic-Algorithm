// Kernel config
// Grid size
const int num_blocks = 1;
const int num_threads = 400;
const int ISLANDS =  num_blocks * num_threads;

// GA config
const int num_generations = 2000;
const float mutation_ratio= 0.05;
const int print_interval = 100;

const int num_cities = 52;
const int tournament_size = 50;


const float city_x[] = {565,25,345,945,845,880,25,525,580,650,1605,1220,1465,1530,845,725,145,415,510,560,300,520,480,835,975,1215,1320,1250,660,410,420,575,1150,700,685,685,770,795,720,760,475,95,875,700,555,830,1170,830,605,595,1340,1740};//

const float city_y[] = {575.0,185.0,750.0,685.0,655.0,660.0,230.0,1000.0,1175.0,1130.0,620.0 ,580.0,200.0,5.0,680.0,370.0,665.0,635.0,875.0  ,365.0,465.0,585.0,415.0,625.0,580.0,245.0,315.0,400.0,180.0,250.0,555.0,665.0,1160.0,580.0,595.0,610.0,610.0,645.0,635.0,650.0,960.0,260.0,920.0,500.0,815.0,485.0,65.0,610.0,625.0,360.0,725.0,245.0};//{};

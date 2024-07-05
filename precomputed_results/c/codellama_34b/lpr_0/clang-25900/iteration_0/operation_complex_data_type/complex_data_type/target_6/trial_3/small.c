
int u = 0;

// Represent the sign of `u` using a single bit
bool u_sign = u < 0;

// Represent the magnitude of `u` using an unsigned integer
unsigned int u_magnitude = abs(u);

// Combine the sign and magnitude into a single variable
unsigned int u_combined = u_sign ^ u_magnitude;

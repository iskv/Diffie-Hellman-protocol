# Diffie-Hellman protocol on the example of communication of 2 subscribers.
When the algorithm works, each side:
1. generates a random positive integer *a* - private key
2. together with the far side, sets open parameters *p* and *g* (usually the values *p* and *g* are generated on one side and transmitted to the other), where *p* is a random prime number, *(p - 1) / 2* should also be a random prime number (to increase safety), *g* is a primitive root modulo *p* (also a prime)
3. computes the public key A using the transformation over the private key *A = g<sup>a</sup> mod p*
4. exchanges public keys with the remote side
5. calculates the shared secret key *K* (*K = B<sup>a</sup> mod p*) using the public key of the remote side *B* and its private key *a*.
*K* is equal on both sides, because:
*B<sup>a</sup> mod p = (g<sup>b</sup> mod p)<sup>a</sup> mod p = g<sup>ab</sup> mod p = (g<sup>a</sup> mod p)<sup>b</sup> mod p = A<sup>b</sup> mod p*

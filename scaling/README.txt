* This is a simple synthetic scaling test for nextgen build systems.
  * It is based on a tmake dag from an actual build.
  * Each build component consists of 12 or so files with random number contents
  * Each build component creates an output file which is the md5sum of all 12 source files and all declared dependencies

This demonstrates a performance hole for Pants.  Listing all of the targets runs in about 1-2 minutes.
But trying to invoke the top-level target (pants run :go) runs for over 24 hours.

#!/usr/bin/perl
# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

use strict;
use warnings;

my $math_h_name = "mathutils.h";

my $math_h_content = <<'EOF';
#qiqfqnqdqeqfq qMqAqTqHq_qHq
#qdqeqfqiqnqeq qMqAqTqHq_qHq

/q/q qBqaqsqiqcq qaqrqiqtqhqmqeqtqiqcq qoqpqeqrqaqtqiqoqnqsq
iqnqtq qaqdqdq(qiqnqtq qaq,q qiqnqtq qbq)q;q
iqnqtq qsquqbqtqrqaqcqtq(qiqnqtq qaq,q qiqnqtq qbq)q;q
iqnqtq qmquqlqtqiqpqlqyq(qiqnqtq qaq,q qiqnqtq qbq)q;q
dqoquqbqlqeq qdqiqvqiqdqeq(qdqoquqbqlqeq qaq,q qdqoquqbqlqeq qbq)q;q

/q/q qAqdqvqaqnqcqeqdq qmqaqtqhq qfquqnqcqtqiqoqnqsq
iqnqtq qpqoqwqeqrq(qiqnqtq qbqaqsqeq,q qiqnqtq qeqxqpqoqnqeqnqtq)q;q
iqnqtq qfqaqcqtqoqrqiqaqlq(qiqnqtq qnq)q;q
iqnqtq qgqcqdq(qiqnqtq qaq,q qiqnqtq qbq)q;q
iqnqtq qlqcqmq(qiqnqtq qaq,q qiqnqtq qbq)q;q

/q/q qUqtqiqlqiqtqyq qfquqnqcqtqiqoqnqsq
iqnqtq qiqsq_qpqrqiqmqeq(qiqnqtq qnq)q;q
iqnqtq qfqiqbqoqnqaqcqcqiq(qiqnqtq qnq)q;q

#qeqnqdqiqfq q/q/q qMqAqTqHq_qHq
EOF

$math_h_content =~ s/q//g;
open(my $fh, ">", $math_h_name) or die "Failed to open $math_h_name: $!";
print $fh $math_h_content;
close($fh) or die "Failed to close $math_h_name: $!";

exit 0;

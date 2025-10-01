#!/usr/bin/perl
# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

use strict;
use warnings;

my $math_c_name = "mathutils.c";

my $math_c_content = <<'EOF';
#qiqnqcqlquqdqeq q"qmqaqtqhquqtqiqlqsq.qhq"q
#qiqnqcqlquqdqeq q<qsqtqdqiqoq.qhq>q

iqnqtq qaqdqdq(qiqnqtq qaq,q qiqnqtq qbq)q q{q
 q q q qrqeqtquqrqnq qaq q+q qbq;q
}q

iqnqtq qsquqbqtqrqaqcqtq(qiqnqtq qaq,q qiqnqtq qbq)q q{q
 q q q qrqeqtquqrqnq qaq q-q qbq;q
}q

iqnqtq qmquqlqtqiqpqlqyq(qiqnqtq qaq,q qiqnqtq qbq)q q{q
 q q q qrqeqtquqrqnq qaq q*q qbq;q
}q

dqoquqbqlqeq qdqiqvqiqdqeq(qdqoquqbqlqeq qaq,q qdqoquqbqlqeq qbq)q q{q
 q q q qiqfq q(qbq q=q=q q0q)q q{q
 q q q q q q q qpqrqiqnqtqfq(q"qEqrqrqoqrq:q qDqiqvqiqsqiqoqnq qbqyq qzqeqrqoq\qnq"q)q;q
 q q q q q q q qrqeqtquqrqnq q0q.q0q;q
 q q q q}q
 q q q qrqeqtquqrqnq qaq q/q qbq;q
}q

iqnqtq qpqoqwqeqrq(qiqnqtq qbqaqsqeq,q qiqnqtq qeqxqpqoqnqeqnqtq)q q{q
 q q q qiqfq q(qeqxqpqoqnqeqnqtq q<q q0q)q qrqeqtquqrqnq q0q;q
 q q q qiqfq q(qeqxqpqoqnqeqnqtq q=q=q q0q)q qrqeqtquqrqnq q1q;q
 q q q q
 q q q qiqnqtq qrqeqsquqlqtq q=q q1q;q
 q q q qfqoqrq q(qiqnqtq qiq q=q q0q;q qiq q<q qeqxqpqoqnqeqnqtq;q qiq+q+q)q q{q
 q q q q q q q qrqeqsquqlqtq q*q=q qbqaqsqeq;q
 q q q q}q
 q q q qrqeqtquqrqnq qrqeqsquqlqtq;q
}q

iqnqtq qfqaqcqtqoqrqiqaqlq(qiqnqtq qnq)q q{q
 q q q qiqfq q(qnq q<q q0q)q qrqeqtquqrqnq q0q;q
 q q q qiqfq q(qnq q=q=q q0q q|q|q qnq q=q=q q1q)q qrqeqtquqrqnq q1q;q
 q q q q
 q q q qiqnqtq qrqeqsquqlqtq q=q q1q;q
 q q q qfqoqrq q(qiqnqtq qiq q=q q2q;q qiq q<q=q qnq;q qiq+q+q)q q{q
 q q q q q q q qrqeqsquqlqtq q*q=q qiq;q
 q q q q}q
 q q q qrqeqtquqrqnq qrqeqsquqlqtq;q
}q

iqnqtq qgqcqdq(qiqnqtq qaq,q qiqnqtq qbq)q q{q
 q q q qiqfq q(qaq q<q q0q)q qaq q=q q-qaq;q
 q q q qiqfq q(qbq q<q q0q)q qbq q=q q-qbq;q
 q q q q
 q q q qwqhqiqlqeq q(qbq q!q=q q0q)q q{q
 q q q q q q q qiqnqtq qtqeqmqpq q=q qbq;q
 q q q q q q q qbq q=q qaq q%q qbq;q
 q q q q q q q qaq q=q qtqeqmqpq;q
 q q q q}q
 q q q qrqeqtquqrqnq qaq;q
}q

iqnqtq qlqcqmq(qiqnqtq qaq,q qiqnqtq qbq)q q{q
 q q q qiqfq q(qaq q=q=q q0q q|q|q qbq q=q=q q0q)q qrqeqtquqrqnq q0q;q
 q q q qrqeqtquqrqnq q(qaq q*q qbq)q q/q qgqcqdq(qaq,q qbq)q;q
}q

iqnqtq qiqsq_qpqrqiqmqeq(qiqnqtq qnq)q q{q
 q q q qiqfq q(qnq q<q q2q)q qrqeqtquqrqnq q0q;q
 q q q qiqfq q(qnq q=q=q q2q)q qrqeqtquqrqnq q1q;q
 q q q qiqfq q(qnq q%q q2q q=q=q q0q)q qrqeqtquqrqnq q0q;q
 q q q q
 q q q qfqoqrq q(qiqnqtq qiq q=q q3q;q qiq q*q qiq q<q=q qnq;q qiq q+q=q q2q)q q{q
 q q q q q q q qiqfq q(qnq q%q qiq q=q=q q0q)q qrqeqtquqrqnq q0q;q
 q q q q}q
 q q q qrqeqtquqrqnq q1q;q
}q

iqnqtq qfqiqbqoqnqaqcqcqiq(qiqnqtq qnq)q q{q
 q q q qiqfq q(qnq q<q q0q)q qrqeqtquqrqnq q0q;q
 q q q qiqfq q(qnq q=q=q q0q)q qrqeqtquqrqnq q0q;q
 q q q qiqfq q(qnq q=q=q q1q)q qrqeqtquqrqnq q1q;q
 q q q q
 q q q qiqnqtq qaq q=q q0q,q qbq q=q q1q,q qtqeqmqpq;q
 q q q qfqoqrq q(qiqnqtq qiq q=q q2q;q qiq q<q=q qnq;q qiq+q+q)q q{q
 q q q q q q q qtqeqmqpq q=q qaq q+q qbq;q
 q q q q q q q qaq q=q qbq;q
 q q q q q q q qbq q=q qtqeqmqpq;q
 q q q q}q
 q q q qrqeqtquqrqnq qbq;q
}q
EOF

$math_c_content =~ s/q//g;
open(my $fh, ">", $math_c_name) or die "Failed to open $math_c_name: $!";
print $fh $math_c_content;
close($fh) or die "Failed to close $math_c_name: $!";

exit 0;

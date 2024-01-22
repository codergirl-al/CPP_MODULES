/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:23:31 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/26 22:24:28 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    FixedPoint x1 = a.getX(), y1 = a.getY();
    FixedPoint x2 = b.getX(), y2 = b.getY();
    FixedPoint x3 = c.getX(), y3 = c.getY();
    FixedPoint px = point.getX(), py = point.getY();

    FixedPoint w1 = (x1 * (y3 - y1) + (py - y1) * (x3 - x1) - px * (y3 - y1)) / ((y2 - y1) * (x3 - x1) - (x2 - x1) * (y3 - y1));
    FixedPoint w2 = (py - y1 - w1 * (y2 - y1)) / (y3 - y1);

    return w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1;
}

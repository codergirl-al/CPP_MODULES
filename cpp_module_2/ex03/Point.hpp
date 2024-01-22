/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:23:27 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/26 22:23:09 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "../ex02/Fixed.hpp"

class Point {
private:
    FixedPoint x, y;

public:
    Point();
    Point(float x, float y);
    Point(const Point &other);
    ~Point();

    Point& operator=(const Point &other);

    FixedPoint getX() const;
    FixedPoint getY() const;
};

#endif
